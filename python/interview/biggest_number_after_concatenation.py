def firstCommer(num1, num2):
	first_cat = str(num1)+str(num2)
	second_cat = str(num2)+str(num1)
	if first_cat > second_cat:
		return num1
	else:
		return num2

if __name__ == '__main__':
	
	num  = firstCommer(4567, 789)
	
	print num

