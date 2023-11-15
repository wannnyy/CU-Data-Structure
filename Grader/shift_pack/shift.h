void shift(int k)
{
	// TODO: Add your code here
	// int sf = k % mSize;
	// std::cout << sf << '\n';
	// if (sf == 0)
	// 	return;
	// if (sf < 0)
	// {
	// 	sf += mSize;
	// }
	int sf;
	if (k >= 0)
	{
		sf = k % mSize;
	}
	else
	{
		k *= -1;
		k = k % mSize ;
		sf = mSize -  k;
		
	}

	// sf would be the element that mHeader must be infront of.
	mHeader->prev->next = mHeader->next;
	mHeader->next->prev = mHeader->prev;

	auto it = begin();

	for (int i = 0; i < sf; i++)
	{
		it++;
	}

	mHeader->prev = it.ptr->prev;
	it.ptr->prev->next = mHeader;

	mHeader->next = it.ptr;
	it.ptr->prev = mHeader;
}
