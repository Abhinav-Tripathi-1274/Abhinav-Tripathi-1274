/*
Vectors are dynamic arrays which can resize when insert or delete elements
Like arrays, there is contigious memory allocation

Way 1 :- to declare vector w/o size
vector < datatype > vector-name;
	
Way 2 :- to declare vector size 
vector < datatype > vector-name ( size );

Way 3 :- to declare vector with size and same value to all the locations
vector <int> vector_name ('size', 'intialized_equal_value')

To find size of vector :- use " vector_name.size() "

To resize vector :- use " vector_name.resize(new_size) "

Capacity :- it is different from size. If we fill vector manually, then 
if size = n, then capacity = 2 ^ (n - 1).
But, if we resize vector, then this may not be true.

To add element in the end of the vector :- " vector_name.pushback( element_value ) "

To insert element at any position in the vector :- 
" vector_name.insert( relative_position_wrt_first_element, element_value_to_be_inserted ) "

To find first element in the vector :- " vector_name.begin() "

To find last element in the vector :- " vector_name.end() "

To delete last element of the vector :- " vector_name.popback() "

To delete any element of the vector :- " vector_name.erase( relative_position_wrt_first_element_to_be_deleted ) "

To delete elements in a vector :- " vector_name.clear() "
*/
