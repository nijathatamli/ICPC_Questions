# n = input()
# three = 0
# edited_n = '$'
# counter_of_number = sum(c.isdigit() for c in n)
# counter_of_number_divided =  counter_of_number % 3
# if counter_of_number > 3:
#     edited_n += n[counter_of_number-1] + ','
# else:
#     counter_of_number = 0

# for x in n[counter_of_number:]:
#     if '0' <= x <= '9':
#         if three != 3:
#             edited_n += x
#             three += 1
#         else:
#             three = 0
#             edited_n += ',' + x
#     elif x == '.':
#         index_of_point = n.find('.')
#         if len(x[index_of_point+1::]) >  1:
#             edited_n += '.' + n[index_of_point + 1:index_of_point +2]
#         else:
#             edited_n += '.' + n[index_of_point + 1] + '0'
        
# if n.find('.') == -1:
#     edited_n += '.00'
# if n[0] == '-':
#     print('(' + edited_n + ')')
# else:
#     print(edited_n)






n = input().strip()

negative = n.startswith('-')
if negative:
    n = n[1:]

if '.' in n:
    integer_part, fractional_part = n.split('.')
else:
    integer_part, fractional_part = n, '00'

fractional_part = (fractional_part + '00')[:2]  

integer_part = integer_part[::-1]
formatted = ''
for i, ch in enumerate(integer_part):
    if i != 0 and i % 3 == 0:
        formatted += ','
    formatted += ch
integer_part = formatted[::-1]


result = f"${integer_part}.{fractional_part}"

if negative:
    result = f"({result})"

print(result)
