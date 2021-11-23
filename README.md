# dmenu - suckless dynamic menu

dmenu is an efficient dynamic menu for X. This fork has the following patches applied by default, check [tools.suckless.org/dmenu](https://tools.suckless.org/dmenu/) for more info.

- [highlight](https://tools.suckless.org/dmenu/patches/highlight/)
- [line height](https://tools.suckless.org/dmenu/patches/line-height/)
- [numbers](https://tools.suckless.org/dmenu/patches/numbers/)


## Requirements

In order to build dmenu you need the Xlib header files plus, consider to install [some patched font](https://github.com/matteogiorgi/.dotfiles/tree/master/themes/.local/share/fonts) since the default one is `mononoki Nerd Font`.


## Installation

First clone this repo:

```
git clone https://github.com/matteogiorgi/dmenu.git
```

Then edit config.mk to match your local setup (dmenu is installed into the `/usr/local` namespace by default). Afterwards enter the following command to build and install dmenu (if necessary as root):

```
make clean install
```

## Usage

Just run something like this:

```
dmenu_run -i -nb '#282a36' -nf '#ff9500' -sb '#ff9500' -sf '#282a36' -fn 'mononoki Nerd Font:regular:pixelsize=12' -h 20
```
