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

I'm using [keymap-drawer](https://github.com/caksoylar/keymap-drawer) to generate images below
(`just draw`, configured in `draw/my_config.yaml`; `draw/base.svg` shows the whole keymap at once).

### Base layer

![Base layer](draw/layer_base.svg)

### Combos

![Combos](draw/layer_combos.svg)

### NAV layer

![Nav layer](draw/layer_nav.svg)

### FN layer

![FN layer](draw/layer_fn.svg)

### NUM layer

![NUM layer](draw/layer_num.svg)

### SYS layer (FN + NAV)

![SYS layer](draw/layer_sys.svg)

## Local build environment

The firmware is built locally with urob's nix-based dev environment (`nix develop`, or `direnv allow`
to activate it automatically); `just`, `west`, the Zephyr SDK and keymap-drawer come from there. See
[docs/build-env.md](docs/build-env.md) for how it works.

```sh
just init         # once: turn the repo into a west workspace (ZMK, Zephyr, modules)
just sync         # after config/west.yml changes (was `just update`)
just build all    # firmware/corne_left…uf2 and firmware/corne_right…uf2
just draw         # regenerate the keymap drawings in draw/
just --list       # everything else
```

Build targets are the two Corne halves in `build.yaml`: board `nice_nano@2.0.0//zmk` (the nice!nano v2
in ZMK's Zephyr 4.1 board naming) with shields `corne_left`/`corne_right` + `nice_view_adapter nice_view`.
ZMK and the modules are pinned in `config/west.yml` with [pin-west](https://github.com/urob/pin-west)
(`just bump-west` updates the pins).
