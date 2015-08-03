# -*- coding: utf-8 -*-
# only in ruby 1.9

# 13195 の素因数は 5, 7, 13, 29 である.
# 600851475143 の素因数のうち最大のものを求めよ.

require 'prime'

large = 600851475143

Prime.each(large)do |prime|
  break if prime > large
  while large % prime == 0 do
      num = prime
      large /= prime
  end
end

puts num
