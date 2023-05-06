
// checking scores
var score=67
if(score >=90){
    console.log("You have obtained A")
}
else if(score>=70 && score < 90){
    console.log("You have obtained B")
}
else if(score >=50 && score<70){
    console.log("You have obtained C")
}
else{
    console.log("You have failed")
}

//squaring arrays using for loops
let num = [2,4,5,6,7,8,9];
let n=num.length;
let b=[];
for(var i=0; i<n; i++){
    b.push(num[i]*num[i]);  
} 
console.log(b);


// with do while loops
var u=1;
var t = 20;
do{
    console.log(u);
    u++
}while(u<=20);

//for in loops
var colors={
    primary: "Blue",
    textiary: "yellow",
    secondary: "Magenta",
}
for(var color in colors){
    console.log(color + '=>'+colors[color])
}
//color arrays
var cArr=["Yellow", "Blue", "Magenta", "Orange", "Pink"]
for(var k in cArr){
    console.log(cArr[k])

}
// for of loops
var sS=[40,78,89,90,23,56];
for(var c of sS){
    if(c%2==1)
    console.log(c);
}

// more
let cc=['white','Green','Blue']
for(var [index, tt] of cc.entries()){//entries method will give carry the index value and give the second value
    console.log(index+'=>'+tt)
}
// classes
var person={
    first_Name: 'Colombia',
    second_Name: 'Riek',
    age: 34,
    city: 'Juba',
    address: 'nimra Talata',
}
console.log(person.first_Name)
console.log(person.second_Name)
console.log(person.city)
console.log(person.age)
console.log(person.address)
for(var bb in person){
    console.log(bb + '=>' +person[bb])
}
