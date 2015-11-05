def num_to_str(number):
	r = number%10
	if(number < 10):
		return str(r)	
	else:
		r = number % 10
		number = number / 10
		return str(num_to_str(number))+str(r)


if __name__ == '__main__':
	
	k = num_to_str(234587987970009000)
	print k