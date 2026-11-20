---
type: Runbook
title: Build, install, test
description: Build ext-raven into Homebrew PHP 8.4 NTS/ZTS or on Debian, run the suite, run the crash sweep.
resource: install-macos.sh
tags: [raven, build, test]
status: draft
generated: { by: cursor-grok/4.6, at: 2026-11-20T02:30:00Z }
sources:
  - id: mac
    resource: install-macos.sh
    title: macOS installer
  - id: debian
    resource: install-debian-trixie.sh
    title: Debian installer
  - id: sweep
    resource: tools/sweep.php
    title: crash sweep
---

# Build, install, test

* Mac: `./install-macos.sh` builds in a temporary copy for `php@8.4` and `php@8.4-zts`, installs, signs, writes `30-raven.ini`. A full build compiles Raven's ~115 sources: about a minute per PHP.
* Debian / Ubuntu / Raspberry Pi OS: `./install-debian-trixie.sh`; needs `libx11-dev` and `pkg-config`. Not yet run on the Pi.
* Suite: `XDEBUG_MODE=off php84 -d memory_limit=128M vendor/bin/pest`, then the same with `zhp`. Headless on `R_BACKEND_NULL`; gate a commit on the exit code.
* Crash sweep: `php84 tools/sweep.php` calls every function with zero/null arguments, one child process each (about 10 minutes). Expected: no crash; `Rfile_dialog_open`, `Rfile_dialog_save`, `Rfile_dialog_select_folder` time out, because headless Raven runs its own modal file browser and waits for input.
