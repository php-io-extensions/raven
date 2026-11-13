<?php

declare(strict_types=1);

it('parses a document and walks its nodes', function (): void {
    $xml = '<Window Title="Hi"><VBox><Button Text="OK" OnClicked="app.ok"/><Label Text="x"/></VBox></Window>';
    $error = new RXmlError();
    $doc = Rxml_document_parse($xml, strlen($xml), $error);
    expect(Rxml_document_is_valid($doc))->toBe(R_TRUE);
    $root = Rxml_document_get_root($doc);
    expect(Rxml_node_get_tag($root))->toBe('Window')
        ->and(Rxml_node_get_attribute($root, 'Title'))->toBe('Hi')
        ->and(Rxml_node_get_child_count($root))->toBe(1);
    $vbox = Rxml_node_get_child($root, 0);
    expect(Rxml_node_get_child_count($vbox))->toBe(2)
        ->and(Rxml_node_get_tag(Rxml_node_get_child($vbox, 0)))->toBe('Button');
    Rxml_document_destroy($doc);
    expect(Rxml_document_is_valid($doc))->toBe(R_FALSE);
});

it('reports where a document is broken', function (): void {
    $xml = "<Window>\n  <VBox>\n</Window>";
    $error = new RXmlError();
    $doc = Rxml_document_parse($xml, strlen($xml), $error);
    expect($doc)->toBe(R_INVALID_ID)
        ->and($error->line)->toBeGreaterThan(0)
        ->and($error->message)->not->toBe('');
});

it('refuses a size larger than the string', function (): void {
    expect(fn () => Rxml_document_parse('<a/>', 100, new RXmlError()))->toThrow(ValueError::class);
});

it('creates widgets from a document', function (): void {
    $xml = '<VBox><Label Text="from xml"/></VBox>';
    $doc = Rxml_document_parse($xml, strlen($xml), null);
    $widget = Rxml_document_create_widget($doc);
    expect(Rwidget_get_type($widget))->toBe(R_WIDGET_VBOX)
        ->and(Rlabel_get_text(Rwidget_get_child($widget, 0)))->toBe('from xml');
});
