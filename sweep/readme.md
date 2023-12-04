#Aurora sweep
My personal layout based on mini-ryoku with heavy modifications like changing the alpha to dvorak and adding ä and ö.

##Symlink location
`qmk-firmware/keyboards/splitkb/aurora/sweep/rev1/keymaps/luimu`

##Compiling
`qmk compile -e CONVERT_TO=liatris -kb splitkb/aurora/sweep/rev1 -km luimu`

###Base layer

```
     ,-------------------------------------------------.    ,-------------------------------------------------.
     | . ,     | Ä       | Ö       | P       | Y       |    | F       | G       | C       | R       | L       |
     |-------------------------------------------------|    |-------------------------------------------------|
     | A       | O       | E       | U       | I       |    | D       | H       | T       | N       | S       |
     |-------------------------------------------------|    |-------------------------------------------------|
     | ' "     | Q       | J       | K       | X       |    | B       | M       | W       | V       | Z       |
     `-------------------------------------------------|    |-------------------------------------------------'
                                   | SPACE   | TAB     |    | ENTER   | BSPC    |
                                   `-------------------'    `-------------------'
```

###Symbol/Number/Arrow key layer

```
     ,-------------------------------------------------.    ,-------------------------------------------------.
     | ; :     | 7 &     | 8 *     | 9 (     | 0 )     |    | <       | >       | ▲       | CAPS    | PG UP   |
     |-------------------------------------------------|    |-------------------------------------------------|
     | [ {     | 4 $     | 5 %     | 6 ^     | ] }     |    | / ?     | ◀       | ▼       | ▶       | PG DN   |
     |-------------------------------------------------|    |-------------------------------------------------|
     | ` ~     | 1 !     | 2 @     | 3 #     | \ |     |    | ESC     | HOME    | INSERT  | DEL     | END     |
     `-------------------------------------------------|    |-------------------------------------------------'
                                   | - _     |  = +    |    |         |         |
                                   `-------------------'    `-------------------'

```

###Function/Mouse layer

```
     ,-------------------------------------------------.    ,-------------------------------------------------.
     | COPY   | F7      | F8      | F9      | F12      |    | ⇐       | ⇑       | ↑       | ⇓       | ⇒       |
     |-------------------------------------------------|    |-------------------------------------------------|
     | PASTE   | F4      | F5      | F6      | F11     |    | MIDDLE  | ←       | ↓       | →       | GAMING  |
     |-------------------------------------------------|    |-------------------------------------------------|
     | MUTE    | F1      | F2      | F3      | F10     |    | VOL +   | <<      | PLAY    | >>      | VOL -   |
     `-------------------------------------------------|    |-------------------------------------------------'
                                   |         |         |    | RIGHT   | LEFT    |
                                   `-------------------'    `-------------------'
```

###Gaming layer

```
     ,-------------------------------------------------.    ,-------------------------------------------------.
     | TAB      | Q       | W       | E       | R      |    | Y       | U       | ▲       | O       | P       |
     |-------------------------------------------------|    |-------------------------------------------------|
     | SHIFT    | A       | S       | D       | F      |    | H       | ◀       | ▼       | ▶       | BASE    |
     |-------------------------------------------------|    |-------------------------------------------------|
     | CTRL     | Z       | X       | C       | V      |    | N       | M       | , <     | . >     | I       |
     `-------------------------------------------------|    |-------------------------------------------------'
                                   | SPACE   | ESC     |    | ENTER   | BSPC    |
                                   `-------------------'    `-------------------'
```