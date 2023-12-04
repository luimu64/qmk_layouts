# Luimu's personal layout repository

## Symlinking
### Commands
- Windows (Powershell admin) `New-Item -ItemType SymbolicLink -Target qmk-layouts\sweep -Path qmk_firmware\keyboards\splitkb\aurora\sweep\keymaps\luimu`
- Linux `ln -s source target`

### Locations
- sweep `qmk-firmware/keyboards/splitkb/aurora/sweep/rev1/keymaps/luimu`
- k6 `qmk-firmware/keyboards/keychron/k6/keymaps/luimu`

## Compiling
`qmk compile -e CONVERT_TO=liatris -kb splitkb/aurora/sweep/rev1 -km luimu`