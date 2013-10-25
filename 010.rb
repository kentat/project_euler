# -*- coding: utf-8 -*-
# only in ruby 1.9 

# /* 10以下の素数の和は 2 + 3 + 5 + 7 = 17 である. */
# /*     200万以下の全ての素数の和を求めよ. */

require 'prime'

small = sum = 3
# sum = small

while small <= 2000000 do
  small += 2
  next unless small.prime?
  sum += small
end

puts sum

