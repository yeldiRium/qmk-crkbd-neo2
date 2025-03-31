# NEO2 for Crkbd on QWERTZ

This repo contains two layouts. The [de layout](./de) is compatible with
computers that support the standard de qwertz layout. The [de-macos](./de-macos)
layout is for the macos nonstandard qwertz layout.

Since I'm forced to use Citrix with remote Windows machines and because Citrix'
key mapping is even worse than MacOS by itself, the de-macos layout has some
weird key placements to make using citrix the priority.

To use this layout, flash your left keyboard half with the de layout and the
right half with the de-macos layout. You can then switch between the two by
plugging the cable in the side you want to use.

## Layers

This is a [Neo 2.0](https://www.neo-layout.org/) layout adjusted for a 3x6+3 keyboard, to be used with the
[Corne Keyboard](https://github.com/foostan/crkbd/). It is my personal
optimization and I will not take requests. If you like it, feel free to use it,
tweak it, whatever.

I also have an [alternative layout for the ErgoDox EZ](https://github.com/yeldiRium/qmk-ergodox-ez-neo2/).

- [Layer 1](#layer-1) Lowercase, upppercase and typographical characters
- [Layer 2](#layer-2) Special characters for programming
- [Layer 3](#layer-3) WASD-like movement keys and number block
- [Layer 4](#layer-4) Function keys
- [Layer 5](#layer-5) Cursor movement

## Legend

 * Keys marked with `---` are dead keys.
 * Blank keys are transparent and fall through to lower levels.
 * Keys marked with `xxxx` are modifiers that are currently pressed while the layer is active.

## Layer 1

This layer implements NEO layers 1 and 2 (using Shift).

```
,-----------------------------------------.          ,----------------------------------------.
| ---  | x/X  | v/V  | l/L  | c/C  | w/W  |          | k/K  | h/H  | g/G  | f/F  | q/Q  | ß/ẞ  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| NEO3 | u/U  | i/I  | a/A  | e/E  | o/O  |          | s/S  | n/N  | r/R  | t/T  | d/D  | y/Y  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| LSFT | ü/Ü  | ö/Ö  | ä/Ä  | p/P  | z/Z  |          | b/B  | m/M  | ,/–  | ./·  | j/J  | RSFT |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | LGUI | LALT | LCTL |    | SPC  | NEO4 | NAV  |
                        `--------------------'    `--------------------'
```

This layer differs slightly on MacOS to improve Citrix usage. Since Citrix uses
LGUI to send LALT and RGUI to send LGUI (I hate this), I put them in their
respective places. But since then there's no Option key for the use on the host
MacOS, I put LALT where I usuall have RSFT, which I barely use anyway.
This makes using MacOS slightly annoying, but Citrix feels like normal Windows.

```
,-----------------------------------------.          ,----------------------------------------.
| ---  | x/X  | v/V  | l/L  | c/C  | w/W  |          | k/K  | h/H  | g/G  | f/F  | q/Q  | ß/ẞ  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| NEO3 | u/U  | i/I  | a/A  | e/E  | o/O  |          | s/S  | n/N  | r/R  | t/T  | d/D  | y/Y  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| LSFT | ü/Ü  | ö/Ö  | ä/Ä  | p/P  | z/Z  |          | b/B  | m/M  | ,/–  | ./·  | j/J  | LALT |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | RGUI | LGUI | LCTL |    | SPC  | NEO4 | NAV  |
                        `--------------------'    `--------------------'
```

## Layer 2

This layer implements NEO layer 3. Access it by pressing the NEO3 key.

```
,-----------------------------------------.          ,-----------------------------------------.
| ---  |  …   |  _   |  [   |  ]   |  ^   |          |  !   |  <   |  >   |  =   |  &   |  €   |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| xxxx |  \   |  /   |  {   |  }   |  *   |          |  ?   |  (   |  )   |  -   |  :   |  @   |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      |  #   |  $   |  |   |  ~   |  `   |          |  +   |  %   |  "   |  '   |  ;   |      |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        |      |      |      |    |      |      | ---  |
                        `--------------------'    `--------------------'
```

## Layer 3

This layer implements NEO layer 4. Access it by pressing the NEO4 key.

```
,-----------------------------------------.          ,-----------------------------------------.
| ---  | Pgup | Bspc | Up   | Del  | Pgdn |          |  ¡   |  7   |  8   |  9   | ---  | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| xxxx | Home | Left | Down | Rght | End  |          |  ¿   |  4   |  5   |  6   |  ,   |  .   |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      | Esc  | Tab  | Ins  | Ent  | Undo |          | ---  |  1   |  2   |  3   | ---  |      |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        |      |      |      |    |      | xxxx |  0   |
                        `--------------------'    `--------------------'
```

## Layer 4

This layer implements function and multimedia keys. Access it by pressing the NEO3 key and the NEO4 key simultaneously.

```
,-----------------------------------------.          ,-----------------------------------------.
| ---  | Mprv | Mply | Mnxt | ---  | ---  |          | ---  | F7   | F8   | F9   | F10  | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
| xxxx | Vold | Volu | Mute | ---  | ---  |          | ---  | F4   | F5   | F6   | F11  | ---  |
|------+------+------+------+------+------|          |------+------+------+------+------+------|
|      | ---  | ---  | ---  | ---  | ---  |          | ---- | F1   | F2   | F3   | F12  |      |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        |      |      |      |    |      | xxxx | ---  |
                        `--------------------'    `--------------------'
```

## Layer 5

This layer implements meta stuff like pointer and mouse wheel control. Access it by pressing the NAV key.

```
,-----------------------------------------.          ,-----------------------------------------.
| ---  | ---  | ---  | Mu   | ---  | ---  |          | ---  | LClk | MWu  | RClk | ---  | ---  |
|------+------+ -----+------+------+------|          |------+------+------+------+------+------|
| ---  | ---  | Ml   | Md   | Mr   | ---  |          | ---  | MWl  | MWd  | MWr  | ---  | ---  |
|------+------+ -----+------+------+------|          |------+------+------+------+------+------|
| ---  | ---  | ---  | ---  | ---  | ---  |          | ---  | ---  | ---  | ---  | ---  | ---  |
`------+------+------+--+---+--+---+--+---+--.    ,--+---+--+---+--+---+--+------+------+------'
                        | APP  |      |      |    | ---  | ---  | xxxx |
                        `--------------------'    `--------------------'
```
