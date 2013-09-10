# only in ruby 1.9 

require 'prime'

# Prime.each(600851475143) do |prime|
#   p prime #=> 2, 3, 5, 7, 11, ..., 97
# end

    # long long int num   = 600851475143;

# for i in [600851475143..0].reverse
i = 600851475143
while i>0 do
  # puts i
  if i.prime? then
    puts i
    break
  end
  i = i - 1
end

# 2.prime? #=> true
# 4.prime? #=> false

# if 7.prime? then
#   puts "prime"
# else
#   puts "not prime"
# end
