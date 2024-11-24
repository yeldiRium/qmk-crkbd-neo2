# NEO2 for Iris CE on QWERTZ

**DISCLAIMER**: Work in progress. Untested. Just for planning.

## Description
The Neo layout is an optimized German keyboard layout developed by the Neo Users Group, supporting many Latin-based alphabets. The positions of the letters are not only optimized for German letter frequency, but also for typical groups of two or three letters. English is considered a primary target as well.

The design tries to enforce the alternating usage of both hands to increase typing speed and incorporates ideas from de-ergo and other ergonomic layouts. High frequency keys are placed in the home row. The current layout Neo 2.0 has unique features making it suited for many target groups such as programmers, mathematicians, scientists or LaTeX authors.

Neo is grouped into six layers, each dedicated to a special purpose.

## Layers
This is a Neo 2.0 layout adjusted for the Iris CE. The keymap is laid out expecting gnu/linux using the german QWERTZ layout (but is also tested and actively used on MacOS).

[Layer 1](#layer-1) Lowercase, upppercase and typographical characters

[Layer 2](#layer-2) Special characters for programming

[Layer 3](#layer-3) WASD-like movement keys and number block

[Layer 4](#layer-4) unused

[Layer 5](#layer-5) unused

[Layer 6](#layer-6) Rough estimation of Ergodox Infinity DE QWERTZ layout

[Layer 7](#layer-7) Function keys

## Legend

 * Keys marked with `---` are dead keys.
 * Blank keys are transparent and fall through to lower levels.
 * Keys marked with `xxxx` are not modifiers that are currently pressed while the layer is active.

## Layer 1

This layer implements NEO layers 1 and 2 (using Shift).

```
,------------------------------------.                ,------------------------------------.
| FKEY | 1/° | 2/§ | 3/¹ | 4/» | 5/« |                | 6/$ | 7/€ | 8/„ | 9/“ | 0/” | -/—  |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
| TAB  | x/X | v/V | l/L | c/C | w/W |                | k/K | h/H | g/G | f/F | q/Q | ß/ẞ  |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
| NEO3 | u/U | i/I | a/A | e/E | o/O |                | s/S | n/N | r/R | t/T | d/D | y/Y  |
|------+-----+-----+-----+-----+-----+------·  ,------|-----+-----+-----+-----+-----+------|
| LSFT | ü/Ü | ö/Ö | ä/Ä | p/P | z/Z | MENU |  | QWER | b/B | m/M | ,/– | ./· | j/J | RSFT |
`------+-----+-----+-----+-----+-----+------'  `------+-----+-----+-----+-----+-----+------'
                    | LGUI | LALT | LCTL |        | OPT  | SPCE | NEO4 |
                    `--------------------'        `--------------------'
```

## Layer 2

This layer implements NEO layer 3.

```
,------------------------------------.                ,------------------------------------.
|      |     |     |     |  ›  |  ‹  |                |  ¢  |  ¥  |  ‚  |  ‘  |  ’  |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      |  …  |  _  |  [  |  ]  |  ^  |                |  !  |  <  |  >  |  =  |  &  |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
| xxxx |  \  |  /  |  {  |  }  |  *  |                |  ?  |  (  |  )  |  -  |  :  |  @   |
|------+-----+-----+-----+-----+-----+------·  ,------|-----+-----+-----+-----+-----+------|
|      |  #  |  $  |  |  |  ~  |  `  |      |  |      |  +  |  %  |  "  |  '  |  ;  |      |
`------+-----+-----+-----+-----+-----+------'  `------+-----+-----+-----+-----+-----+------'
                    |      |      |      |        |      |      |      |
                    `--------------------'        `--------------------'
```

## Layer 3

This layer implements NEO layer 4.

```
,------------------------------------.                ,------------------------------------.
|      |     |     |     |     |     |                |     | Tab |  /  |  *  |  -  |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      | pUp |  ⌫  |  ↑  |  ⌦  | pDn |                |  ¡  |  7  |  8  |  9  |  +  |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      | Hom |  ←  |  ↓  |  →  | End |                |  ¿  |  4  |  5  |  6  |  ,  |  .   |
|------+-----+-----+-----+-----+-----+------·  ,------|-----+-----+-----+-----+-----+------|
|      | Esc | Tab | Ins | Ret |     |      |  |      |  :  |  1  |  2  |  3  |  ;  |  0   |
`------+-----+-----+-----+-----+-----+------'  `------+-----+-----+-----+-----+-----+------'
                    |      |      |      |        |      |      | xxxx |
                    `--------------------'        `--------------------'
```

## Layer 7

This layer implements function and multimedia keys.

```
,------------------------------------.                ,------------------------------------.
| xxxx |  ⏮︎  |  ⏯︎  |  ⏭︎  |     |     |                |     | F10 | F11 | F12 |     |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      | Vld | Vlu | Mut |     |     |                |     | F7  | F8  | F9  |     |      |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
|      |     |     |     |     |     |                |     | F4  | F5  | F6  |     |      |
|------+-----+-----+-----+-----+-----+------·  ,------|-----+-----+-----+-----+-----+------|
|      |     |     |     |     |     |      |  |      |     | F1  | F2  | F3  |     |      |
`------+-----+-----+-----+-----+-----+------'  `------+-----+-----+-----+-----+-----+------'
                    |      |      |      |       |       |      |      |
                    `--------------------'       ` --------------------'
```

## Layer 6

A rough qwertz layout ajusted to my gaming likes.

```
,------------------------------------.                ,------------------------------------.
| ESC  | 1/! | 2/" | 3/§ | 4/$ | 5/% |                | 6/& | 7// | 8/( | 9/) | 0/= | ß/ẞ  |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
| TAB  | q/Q | w/W | e/E | r/R | t/T |                | z/Z | u/U | i/I | o/O | p/P | ü/Ü  |
|------+-----+-----+-----+-----+-----|                |-----+-----+-----+-----+-----+------|
| LSFT | a/A | s/S | d/D | f/F | g/G |                | h/H | j/J | k/K | l/L | ö/Ö | ä/Ä  |
|------+-----+-----+-----+-----+-----+------·  ,------|-----+-----+-----+-----+-----+------|
| LSFT | y/Y | x/X | c/C | v/V | b/B | LGUI |  | NEO  | n/N | m/M | ,/; | ./: | -/_ | RSFT |
`------+-----+-----+-----+-----+-----+------'  `------+-----+-----+-----+-----+-----+------'
                    | SPCE | LALT | LCTL |        | BSPC | SPCE | RET  |
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
|------+-----+-----+-----+-----+-----+------·  ,------|-----+-----+-----+-----+-----+------|
|      |     |     |     |     |     |      |  |      |     |     |     |     |     |      |
`------+-----+-----+-----+-----+-----+------'  `------+-----+-----+-----+-----+-----+------'
                    |      |      |      |        |      |      |      |
                    `--------------------'        `--------------------'
```
