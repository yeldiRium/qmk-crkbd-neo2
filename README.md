# NEO2 for Crkbd on QWERTZ

This repo contains two layouts. The [de layout](./de) is compatible with
computers that support the standard de qwertz layout. The [de-macos](./de-macos)
layout is for the macos nonstandard qwertz layout.

Since I'm using Citrix with remote Windows machines and because Citrix'
key mapping is even worse than MacOS by itself, the de-macos layout has some
weird key placements to make using citrix the priority.

To use this layout, flash your left keyboard half with the de layout and the
right half with the de-macos layout. You can then switch between the two by
plugging the cable in the side you want to use.

## Layers

This is a [Neo 2.0](https://www.neo-layout.org/) [home-row mod](https://precondition.github.io/home-row-mods)
layout adjusted for a 3x6+3 keyboard, to be used with the
[Corne Keyboard](https://github.com/foostan/crkbd/).

I also have an [alternative layout for the ErgoDox EZ](https://github.com/yeldiRium/qmk-ergodox-ez-neo2/).

- [Layer 1](#layer-1) Lowercase, uppercase and typographical characters
- [Layer 2 - Symbols](#layer-2) Symbols for programming
- [Layer 3 - Navigation & Numpad](#layer-3) WASD-like movement keys and number block
- [Layer 4 - Function](#layer-4) Function keys
- [Layer 5 - Mouse](#layer-5) Cursor movement
- [Layer 6 - Media](#layer-6) Multimedia Keys

## Legend

 * The home-row mods are written below the tap-keys.
 * Keys marked with `---` are dead keys.
 * Blank keys are transparent and fall through to lower levels.
 * Keys marked with `xxxx` are modifiers that are currently pressed while the layer is active.

## Home-row mods

Some peculiarities about the way home-row mods are implemented here:
- I feel that there are inconsistencies in how some OSes handle the right versions
of modifiers, so I usually just use the left ones. An exception are the LGUI/
RGUI considerations on macOS for citrix.
- To allow using home-row mods with the NEO2 layers 3&4, most layers are split
into two logical layers, where using the left-hand modifier activates the right
half of the layout and vice versa. This makes it pretty much impossible to use
the layout one-handed, which is currently the biggest drawback.

## Layer 1

This layer implements NEO layers 1 and 2 (using Shift).

```
,-----------------------------------------.          ,----------------------------------------.
| ---  | x/X  | v/V  | l/L  | c/C  | w/W  |          | k/K  | h/H  | g/G  | f/F  | q/Q  | ß/ẞ  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| ---  | u/U  | i/I  | a/A  | e/E  | o/O  |          | s/S  | n/N  | r/R  | t/T  | d/D  | y/Y  |
|      | LGUI | LALT | LCTL | LSFT | LN3  |          | RN3  | LSFT | LCTL | LALT | LGUI |      |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| ---  | ü/Ü  | ö/Ö  | ä/Ä  | p/P  | z/Z  |          | b/B  | m/M  | ,/–  | ./·  | j/J  | ---  |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | FUN  | LN4  | MOU  |    | SPC  | RN4  | MED  |
                        `--------------------'    `--------------------'
```

This layer differs slightly on MacOS to improve Citrix usage. Since Citrix uses
LGUI to send LALT and RGUI to send LGUI (I hate this), I swap the corresponding
home mods. But since then there's no Option key for the use on the host
MacOS, I put L/RALT on the empty outer keys.
This makes using MacOS slightly annoying, but Citrix feels like normal Windows.

```
,-----------------------------------------.          ,----------------------------------------.
| ---  | x/X  | v/V  | l/L  | c/C  | w/W  |          | k/K  | h/H  | g/G  | f/F  | q/Q  | ß/ẞ  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| ---  | u/U  | i/I  | a/A  | e/E  | o/O  |          | s/S  | n/N  | r/R  | t/T  | d/D  | y/Y  |
|      | RGUI | LGUI | LCTL | LSFT | LN3  |          | RN3  | LSFT | LCTL | LGUI | RGUI |      |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| LALT | ü/Ü  | ö/Ö  | ä/Ä  | p/P  | z/Z  |          | b/B  | m/M  | ,/–  | ./·  | j/J  | LALT |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | FUN  | LN4  | MOU  |    | SPC  | RN4  | MED  |
                        `--------------------'    `--------------------'
```

## Layer 2 - Symbols

This layer implements NEO2 layer 3 and is split into halves to allow for home-row mods. Press LN3 to access the right half while still having access
to the left home-row mods. Analogous for the right.
There is no shift here, because shift does things to the symbols that I don't anticipate and don't want to use, so I re-
move it to avoid accidental use.

```
Right (pressing LN3):
,-----------------------------------------.          ,-----------------------------------------.
| ---  | ---  | ---  | ---  | ---  | ---  |          |  !   |  <   |  >   |  =   |  &   |  €   |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| ---  | LGUI | LALT | LCTL | ---  | xxxx |          |  ?   |  (   |  )   |  -   |  :   |  @   |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      | ---  | ---  | ---  | ---  | ---  |          |  +   |  %   |  "   |  '   |  ;   |      |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | ---  | ---  | ---  |    | ---  | ---  | ---  |
                        `--------------------'    `--------------------'

Left (pressing RN3):
,-----------------------------------------.          ,-----------------------------------------.
| ---  |  …   |  _   |  [   |  ]   |  ^   |          | ---  | ---  | ---  | ---  | ---  | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| ---  |  \   |  /   |  {   |  }   |  *   |          | xxxx | ---  | RCTL | RALT | RGUI | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      |  #   |  $   |  |   |  ~   |  `   |          | ---  | ---  | ---  | ---  | ---  |      |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | ---  | ---  | ---  |    | ---  | ---  | ---  |
                        `--------------------'    `--------------------'
```

## Layer 3 - Navigation & Numpad

This layer implements NEO layer 4 and like the previous layer it's split into two halves to allow usage of home-row
mods.

```
Right (pressing LN4):
,-----------------------------------------.          ,-----------------------------------------.
| ---  | ---  | ---  | ---  | ---  | ---  |          |  ¡   |  7   |  8   |  9   | ---  | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| ---  | LGUI | LALT | LCTL | LSFT | ---  |          |  ¿   |  4   |  5   |  6   |  ,   |  .   |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      | ---  | ---  | ---  | ---  | ---  |          | ---  |  1   |  2   |  3   | ---  |      |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | ---  | xxxx | ---  |    | ---  | ---  |  0   |
                        `--------------------'    `--------------------'

Left (pressing RN4):
,-----------------------------------------.          ,-----------------------------------------.
| ---  | Pgup | Bspc | Up   | Del  | Pgdn |          | ---  | ---  | ---  | ---  | ---  | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| ---  | Home | Left | Down | Rght | End  |          | ---  | RSFT | RCTL | RALT | RGUI | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      | Esc  | Tab  | Ins  | Ent  | Undo |          | ---  | ---  | ---  | ---  | ---  |      |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | ---  | ---  | ---  |    | ---  | xxxx | ---  |
                        `--------------------'    `--------------------'
```

## Layer 4 - Fun(-ction)

This layer implements function keys. Access it by pressing the FUN key.

```
,-----------------------------------------.          ,-----------------------------------------.
| ---  | ---  | ---  | ---  | ---  | ---  |          | ---  | F7   | F8   | F9   | F10  | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| ---  | LGUI | LALT | LCTL | LSFT | ---  |          | ---  | F4   | F5   | F6   | F11  | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      | ---  | ---  | ---  | ---  | ---  |          | ---- | F1   | F2   | F3   | F12  |      |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | xxxx | ---  | ---  |    | ---  | ---  | ---  |
                        `--------------------'    `--------------------'
```

## Layer 5 - Mou(-se)

This layer implements meta stuff like pointer and mouse wheel control. Access it by pressing the MOU key.

```
,-----------------------------------------.          ,-----------------------------------------.
| ---  | ---  | ---  | ---  | ---  | ---  |          | ---  | ---  | ---  | ---  | ---  | ---  |
|------+------+ -----+------+------+------|          |------+------+------+------+------+------|
| ---  | LGUI | LALT | LCTL | LSFT | ---  |          | ---  | Ml   | Md   | Mu   | Mr   | ---  |
|------+------+ -----+------+------+------|          |------+------+------+------+------+------|
| ---  | ---  | ---  | ---  | ---  | ---  |          | ---  | MWl  | MWd  | MWu  | MWr  | ---  |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | ---  | ---  | xxxx |    | APP  | LClk | RClk |
                        `--------------------'    `--------------------'
```

## Layer 6 - Med(-ia)

This layer implements multimedia keys. Access it by pressing the MED key.

```
,-----------------------------------------.          ,-----------------------------------------.
| ---  | Mprv | Mply | Mnxt | ---  | ---  |          | ---  | ---  | ---  | ---  | ---  | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| ---  | Vold | Volu | Mute | ---  | ---  |          | ---  | RSFT | RCTL | RALT | RGUI | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      | ---  | ---  | ---  | ---  | ---  |          | ---- | ---  | ---  | ---  | ---  |      |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | ---  | ---  | ---  |    | ---  | ---  | xxxx |
                        `--------------------'    `--------------------'
```

## Template

```
,-----------------------------------------.          ,-----------------------------------------.
|      |      |      |      |      |      |          |      |      |      |      |      |      |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      |      |      |      |      |      |          |      |      |      |      |      |      |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      |      |      |      |      |      |          |      |      |      |      |      |      |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        |      |      |      |    |      |      |      |
                        `--------------------'    `--------------------'
```
