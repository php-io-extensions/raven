# Security Policy

## Supported versions

ext-raven is pre-1.0. No 0.x release receives security fixes or advisories; fixes land in the
next release line. Security support starts with 1.0.

| Version | Security fixes |
|---------|----------------|
| < 1.0   | No             |

## Reporting a vulnerability

Please don't open a public issue for a security problem.

Report it privately through GitHub: the **Report a vulnerability** button on the
[php-io-extensions/raven](https://github.com/php-io-extensions/raven) repository's **Security** tab.
If that isn't available, email **info@projectsaturnstudios.com**.

Include what you found, the affected version, your platform, PHP build (NTS or ZTS), the backend in
use, and steps to reproduce (`php --ri raven` shows the extension version and the Raven commit it
carries).

A defect in Raven itself belongs with that project. Report it here as well when ext-raven should
guard against it.

## Security model

ext-raven runs Raven in the PHP process. Raven opens the windows, files, fonts and images the script
names, loads the Vulkan loader and (on Linux) Wayland and D-Bus libraries at run time, and runs worker
and render threads. Raven is compiled into the module from an unchanged upstream copy (main `dfac083` on 0.11.x-nightly).

- **Inputs.** Narrow C integers are range-checked; pixel buffers must hold `width × height × 4` bytes;
  sized text and byte strings must hold the size passed with them; arrays must hold their count;
  fixed C arrays must have their exact length. Each is a `ValueError` before Raven is called.
- **Threads.** PHP code runs only on the PHP thread that owns Raven. Raven's workers and render thread
  hand calls to it and take a no-op result past a deadline; they never enter the engine.
- **Lifetimes.** Callables and user values are held while Raven may use them. A painter is refused
  once its paint callback has returned. Raven's handles carry generation counters, so a stale id is
  reported by Raven (`R_ERROR_INVALID_ID`), not dereferenced.
- **Fork.** Raven cannot be used in a process forked after `Rinit`: every call there is an `Error`.
- **XML and files.** Raven parses the XML, CSV, fonts, SVG and images it is given (nanosvg, stb_image).
  Treat interfaces and assets from untrusted sources as you would any parser input.
