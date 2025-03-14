# My personal ZMK Config (wireless Corne 5x3 + 3)

This project is heavily 'inspired' by urob's [zmk-config](https://github.com/urob/zmk-config.git).
I found it when trying to make my first baby-steps with homerow-mods. Since then, I'm having a lot of
fun playing around and 'finding things out'...

## Changes I made (so far...)

### QWERTY

I decided to use QWERTY for the main layout, because I use VIM and the commandline a lot, which in their standard
configurations are somewhat dependent on QWERTY (e.g. hjkl for movement...).
Also, I wanted to flatten the learning curve a little bit.

### macOS vs. other OSes

Urob's Keymap is made for Windows, so I had to change the layout
of the homerow-mods to suit my needs as a macOS user. However, as macOS isn't the only platform I use,
I'm still working on ideas for a configuration that makes switching between different computers possible...

For the macOS/Windows-Alt-Codes that make unicode characters work in my config, I had to use:

```C++
#define HOST_OS 2  // set to 2 for macOS/Windows-Alt-Codes, default is 0 (Windows)
```

as documented in [zmk-helpers](https://github.com/urob/zmk-helpers).

### Mouse layer

I decided to ditch the mouse layer in favor of a dedicated Tab key.

### Unicode / Greek layer

Since I'm using the [EurKEY](https://en.wikipedia.org/wiki/EurKEY) layout on most of my machines,
I have no need to set up an additional Unicode layer. Also, switching between different Operating systems
while keeping the Unicode characters working seems impossible as of now.

Get it [here](https://eurkey.steffen.bruentjen.eu/start.html)!

## Layout

I'm using [keymap-drawer](https://github.com/caksoylar/keymap-drawer) to generate images below.

### Base layer

![Base layer](img/base_layer.svg)

### Combos

![Combos](img/combos_only.svg)

### NAV layer

![Nav layer](img/nav_layer.svg)

### FN layer

![FN layer](img/fn_layer.svg)

### NUM layer

![NUM layer](img/num_layer.svg)
