// binary search sirf monotonic function ke upper lgta hai
// means-ya to incresing ya decresing
// condition- element should be monotonic function
//ex-3 5 9 13 27
//1. sabse pahle hmko apna mid element nikalna hota hai
// mid element=9
//2.phir hm  mid element ko apni key se compare krte hai
//key=13
// agr same hota to m return kr deta usi index ko
// ab nhi hai to
// agar key mid se bda hai to uske right me hoga iske mtlb mtlb mujhe right wale part me search krna hai
// nhi to left me
// 13 27(yaha right wla)
// mid=(start+end)/2=(3+4)/2=3.
// ab key ko mid element se comapare kiya

//13==13
// true return kr denge
