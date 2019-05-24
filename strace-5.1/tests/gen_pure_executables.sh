#!/bin/sh -efu
#
# Copyright (c) 2017-2018 Dmitry V. Levin <ldv@altlinux.org>
# All rights reserved.
#
# SPDX-License-Identifier: GPL-2.0-or-later

usage()
{
	cat >&2 <<EOF
Usage: $0 [<input> [<output>]]

Generate pure_executables.am from <input> list.
Deduce output file from <input> unless an <output> is specified.
EOF
	exit 1
}

input="${0%/*}/pure_executables.list"
[ $# -eq 0 ] || { input="$1"; shift; }
output="$(dirname "$input")/pure_executables.am"
[ $# -eq 0 ] || { output="$1"; shift; }
[ $# -eq 0 ] || usage

exec > "$output"

echo "# Generated by $0 from $input; do not edit."
echo 'PURE_EXECUTABLES = \'
sed -n 's/^[^#].*/  & \\/p' < "$input"
echo '  #'
