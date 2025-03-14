#!/usr/bin/env sh

## Generate keymap file
keymap -c my_config.yaml parse -z ../config/corne.keymap >my_keymap.yaml

## Draw the entire keymap
keymap -c my_config.yaml draw --keys-only my_keymap.yaml >my_keymap.svg

## Draw separate layers
keymap -c my_config.yaml draw -s Base --keys-only my_keymap.yaml >layer_base.svg
keymap -c my_config.yaml draw -s Num --keys-only my_keymap.yaml >layer_num.svg
keymap -c my_config.yaml draw -s Fn --keys-only my_keymap.yaml >layer_fn.svg
keymap -c my_config.yaml draw -s Nav --keys-only my_keymap.yaml >layer_nav.svg
keymap -c my_config.yaml draw -s Sys --keys-only my_keymap.yaml >layer_sys.svg

## Draw the combos separately on a blank layer
keymap -c my_config.yaml draw -s Base --combos-only my_keymap.yaml >combos_only.svg
