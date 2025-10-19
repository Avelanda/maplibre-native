# Doxygen documentation

This directory contains the files needed to generate the documentation of MapLibre Native Core using [Doxygen](https://www.doxygen.nl).

[Doxygen Awesome](https://jothepro.github.io/doxygen-awesome-css/index.html) is a submodule which is utilized as a theme, and its inclusion allows easy access for updates; and you can simply check out the latest version on the given link.

The `[MAINPAGE.md](./MAINPAGE.md)` file contains the contents of the first page you see when you open the documentation website. While `[footer.html](./footer.html)` contains the contents of the footer.

To generate the documentation, run

```
doxygen
```

in this directory.

While working on the documentation; you might find it useful to run a file server. For example, you can use:

```
cd html
python -m http.server
```
