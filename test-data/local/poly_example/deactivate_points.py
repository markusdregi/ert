#!/usr/bin/env python3

import sys

active_mask = [1] * int(sys.argv[2])
for idx in sys.argv[3: ]:
    active_mask[int(idx)] = 0

with open(sys.argv[1], "w") as f:
    f.write("\n".join(map(str, active_mask)))
