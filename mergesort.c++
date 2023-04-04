//merge sort recursively implementation
//ye bubble selectionsort insertion insbse fast hai
//what-? 
// i/p- array jisko sort krna hota hai 
// 38 27 43 3 9 82 10
// sabse pahle array ko 2 part me divide krenge mid nikal ke
// mid=(s+e)/2
// s=0 and e=6 then mid=3
// ab array ke 2 part ho gye
// 1. 38 27 43 3
// 2. 9 82 10
// same ab hm in dono ko bhi divide kr denge
// mid for 1=1(27)
//mid for 2=1(8)

// ab 4 array bn gye h 
// 1.38 27 2.43 3
// 1.9 82 2. 10
// same aage bhi ase hi todenge
// 1. 38
// 2. 27
// 3. 43 4. 3
// 5. 9 6.82 .7 10

//in short 38 27 43 3 9 82 10
// ab merge krenge 38 27= 27 38
// 43 3 =3 43
// 9 82= 9 82
// 10
// ab dono ko merge krenge 27 38 3 43
// 3 27 38 43
// 9 10 82
// ab in dono ko merge kiya
//3 9 10 27 38 43 82===finall result


//*****approach how to implement merge sort******//
// starting me aapko array diya hoga jisse do part me tod diya 

//ab indono array ko recursion se sort kr lenge
//recursion mtlb ek case krunga solve baki apne aap ho jayega
//ab in dono sorted array ko merge krenge

// 2 approaches thi 
// 1.create new array and copy values
// 2. use indexes
 //hm yaha pahle wale ko implement krenge