//3 7 11 13 19 27
// key=27
//sabse pahle mid nikala=11
//(0+5)/2=2
// ab mid(11) ko compare kiya 27 (key)se 
//jo ki equal nhi h
// ab dekha ki key>mid 
//mtlb ab right wale part me search krenge
// (3+5)/2=4
// ab dekhenge ki mid(19) 27 ke baarabar hai ki nhi
// jo ki nhi hai 
// ab dekhenge ki key>mid
// then right part me jayenge
// ab iska mid nikalenge
// (5+5)/2=5
//ab check krenge ki ye mid key ke barabar hai ki nhi
// jo ki hia 
// isliye true index return kr denge 5 mtlb 27.
// short me btaun kya kr rhe
// 1.mid nikale
// 11.compare kre
//111. = aya to return kr denge
// 1111.(!=)to part decide
// or isi ko repeat kr rahe