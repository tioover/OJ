empty_bottle = int(input())
soft_drink = 0

while empty_bottle > 1:
    if empty_bottle == 2:
        empty_bottle = 0
        soft_drink += 1
        break
    odd = empty_bottle % 3
    new = (empty_bottle - odd) / 3
    soft_drink += new
    empty_bottle = odd + new

print(soft_drink)
