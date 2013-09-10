# only in ruby 1.9 

require 'prime'

# Prime.each(600851475143) do |prime|
#   p prime #=> 2, 3, 5, 7, 11, ..., 97
# end

large = 600851475143
small = 2

while small < large do
  small +=1
  next unless small.prime?
  if large % small == 0 then
    large /= small 
  end
end

puts small

    # long long int num   = 600851475143;

# # for i in [600851475143..0].reverse
# num = 600851475143
# # i = 2
# for i in(600851475143) do
#   puts i
# end



# while i>0 do
#   # puts i
#   if i.prime? then
#     puts i
#     break
#   end
#   i = i - 1
# end

# 2.prime? #=> true
# 4.prime? #=> false

# if 7.prime? then
#   puts "prime"
# else
#   puts "not prime"
# end
