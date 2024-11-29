# NEO2 for <insert keyboard here> on QWERTZ

**DISCLAIMER**: Work in progress. Untested. Just for planning.

## Layers
This is a Neo 2.0 layout adjusted for a smaller (3x6) keyboard. It is my personal optimization and I will not take requests. If you like it, feel free to use it, tweak it, whatever. The keymap is laid out expecting gnu/linux using the german QWERTZ layout (but is also tested and actively used on MacOS).

[Layer 1](#layer-1) Lowercase, upppercase and typographical characters

[Layer 2](#layer-2) Special characters for programming

[Layer 3](#layer-3) WASD-like movement keys and number block

[Layer 4](#layer-4) Function keys

## Legend

 * Keys marked with `---` are dead keys.
 * Blank keys are transparent and fall through to lower levels.
 * Keys marked with `xxxx` are not modifiers that are currently pressed while the layer is active.

## Layer 1

This layer implements NEO layers 1 and 2 (using Shift).

```
,------------------------------------.                ,------------------------------------.
|      | x/X | v/V | l/L | c/C | w/W |                | k/K | h/H | g/G | f/F | q/Q | ß/ẞ  |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
| NEO3 | u/U | i/I | a/A | e/E | o/O |                | s/S | n/N | r/R | t/T | d/D | y/Y  |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
| LSFT | ü/Ü | ö/Ö | ä/Ä | p/P | z/Z |                | b/B | m/M | ,/– | ./· | j/J | RSFT |
`------+-----+-----+-----+-----+-----+---.        ,---+-----+-----+-----+-----+-----+------'
                    | LGUI | LALT | LCTL |        | SPCE | NEO4 |      |
                    `--------------------'        `--------------------'
```

## Layer 2

This layer implements NEO layer 3. Access it by pressing the NEO3 key.

```
,------------------------------------.                ,------------------------------------.
|      |  …  |  _  |  [  |  ]  |  ^  |                |  !  |  <  |  >  |  =  |  &  |  €   |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
| xxxx |  \  |  /  |  {  |  }  |  *  |                |  ?  |  (  |  )  |  -  |  :  |  @   |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      |  #  |  $  |  |  |  ~  |  `  |                |  +  |  %  |  "  |  '  |  ;  |      |
`------+-----+-----+-----+-----+-----+---.        ,---+-----+-----+-----+-----+-----+------'
                    |      |      |      |        |      |      |      |
                    `--------------------'        `--------------------'
```

## Layer 3

This layer implements NEO layer 4. Access it by pressing the NEO4 key.

```
,------------------------------------.                ,------------------------------------.
|      | pUp | Bsp |  ↑  | Del | pDn |                |  ¡  |  7  |  8  |  9  |  +  |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      | Hom |  ←  |  ↓  |  →  | End |                |  ¿  |  4  |  5  |  6  |  ,  |  .   |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      | Esc | Tab | Ins | Ret |     |                |  :  |  1  |  2  |  3  |  ;  |  0   |
`------+-----+-----+-----+-----+-----+---.        ,---+-----+-----+-----+-----+-----+------'
                    |      |      |      |        |      | xxxx |      |
                    `--------------------'        `--------------------'
```

## Layer 4

This layer implements function and multimedia keys. Access it by pressing the NEO3 key and the NEO4 key simultaneously.

```
,------------------------------------.                ,------------------------------------.
|      | Pre | Ply | Nxt |     |     |                |     | F7  | F8  | F9  | F10 |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
| xxxx | Vld | Vlu | Mut |     |     |                |     | F4  | F5  | F6  | F11 |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      |     |     |     |     |     |                |     | F1  | F2  | F3  | F12 |      |
`------+-----+-----+-----+-----+-----+---.        ,---+-----+-----+-----+-----+-----+------'
                    |      |      |      |        |      | xxxx |      |
                    `--------------------'        `--------------------'
```

## Template

```
,------------------------------------.                ,------------------------------------.
|      |     |     |     |     |     |                |     |     |     |     |     |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      |     |     |     |     |     |                |     |     |     |     |     |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      |     |     |     |     |     |                |     |     |     |     |     |      |
`------+-----+-----+-----+-----+-----+---.        ,---+-----+-----+-----+-----+-----+------'
                    |      |      |      |        |      |      |      |
                    `--------------------'        `--------------------'
```
