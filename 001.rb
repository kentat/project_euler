# -*- coding: utf-8 -*-

sum = 0

0.upto(1000-1) { |i|
  if (i%3) == 0 then
    sum +=i
  elsif (i%5) == 0 then
    sum +=i
  end
}

puts sum
