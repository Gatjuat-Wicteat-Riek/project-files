/*let n = 23;
let i = 24;
console.log(n +i)


var b = "Am going to play football in the evening";

console.log(b)*/

/*var arr =[23, "Ferrari", true, 2.4]
arr[1] = "Toyota"
console.log(arr)
console.log(arr[0])
console.log(arr[1])
console.log(arr[2])n
console.log(arr[3])*/
/*var arr2 = [23,45,67,8]

arr2.pop()

console.log(arr2)

var a = arr2.pop()

console.log(a)

var d = arr2.shift()
console.log(d)*/
//arrays
/*var arr2 = [23, 45, 7, 8, 45, 56, 100]

console.log(arr2)

var b = arr2.pop()

console.log(b)

var c = arr2.shift()

console.log(c)*/

//objects
/*let person ={
    firstName: "Colombia",
    secondName: "Riek",
    age:25,
    ownshouse: false,
}
//access values in the objects
console.log(person)
console.log(person.age)
console.log(person.ownshouse)
console.log(person.firstName)
console.log(person.secondName)


let cap ={
    firstName: "Bridget",
    lastName: "Atoma",
    age: 27,

    friends: ["Kuol", "Majok", "Beginner"],
    address:{
        state: "New york",
        pincode: 13456,
        city:{
            name: "brookly",
            pincode: 1345,
        }
    }

}
//access each element in the object
//know that you can acess them also using their indices
console.log(cap)
console.log(cap.friends)
console.log(cap.address)*/


// if statements

/*let myScore = 67

if (myScore > 87){

console.log("Yahh congrats you won the bicycle.")

}
else{
    console.log("Ohh sorry you will get it next time.")
}


//else if statements
var studentScore = 45

if(studentScore >90){

    console.log("The student has scored A")

}
else if(studentScore>=78 && studentScore<=89){
    console.log("The student has scored B")
}

else if(studentScore>=50 && studentScore<=60){
    console.log("The student has scored B")
}   
else{
    console.log("The student has F")
}*/

// for loops
/*var g = "Hello world to colombia shop"
 for(var i =0; i<11; i++){
    console.log(g)
 }*/

 // whle and do loop
 /*var i = 4
 var n = 11
 do{
    console.log(i)
    i++
 } while(i<=n)


var colors ={
    primary: "Blue",
    secondary: "Red",
    tertiary: "Green",

}
for(var color in colors){
    console.log(colors[color])
}

//for of looop
 var scores =[ 25, 45, 67, 78, 90, 13, 45]
 for(var c of scores){
    console.log(c)
 }

var B =["Newyork", "Washington", "Moscow", "London", "Juba"]
for(var f of B){
    console.log(f)
}
//more example on conditional statement
let num1 = 2
let num2 = 02
if(num1 == num2){
    console.log("True")
}
else{
    console.log("False")
}
let a = 100
for(i =1; i<=a; i++){
    if(i % 2==0)
    console.log(i)
}*/

//functions
/*function greet() {
    console.log("Hello welcome to Colombia shopping mall. What do you want to buy?") 
}
greet()

function add(a, v,r){
    console.log(a + v + r)
    console.log(a * v)
    console.log(v * r)
}

var b = function(f, g){
    console.log(f * g)
    console.log(f + g)
}
b(5, 8)

var c = function(r, e){
    return r * e
}
let results = c(56, 78)
console.log(results)*/
//execises

/*unction checkAge(data) {
    if (data === { age: 18 }) {
        console.log("You are an adult!");
    } else if (data == { age: 18 }) {
        console.log("You are still an adult.");
    } else {

        console.log(`Hmm.. You don't have an age I guess`);
    }
   }
   
checkAge({ age: 18 });

num1=3;
function cal() {
num1=6;
num2=5;
num3=num2*num1;
console.log(num3);
}
cal();*/
/*let test1 = function(){
    console.log(1)
}
let test2 = function(a){
    console.log(a*78)

}
let test3 = function(a, d){
    console.log(a*d)
}
test1()

test2(34)

test3(20, 23)*/

/*let arr = ["Hello", "am", "going", "to", "play"]
let b = arr[1]
let v = arr[2]
let k = arr[3]
console.log(b)
console.log(v)
console.log(k)*/

//const obj = { foo: 1 }
//obj.bar = 2

//console.log(typeof (new (class { class () {} })))



//imperative way of writing code
//const b =8
//const bSquared =b*b
//let isEven;
//if(bSquared % 2==0){
 //   isEven =true

//}
//else{
  //  isEven =false

//}
//console.log(isEven)


/*const isEven =(n)=>{
    return n % 2==0
}
let printResult =(evenFn, num)=>{
const isEven =evenFn(num)
console.log("The number ${num} is even number ${isNumEven}")
}
printResult(isEven, 14)8*/
//mapping
/*const num =[1, 2, 3, 4, 6, 5]
const squareNum = num.map(function(n){
return n*n
})
console.log(squareNum)
 
const trade =[2000, 4000, 5600, 6780, 7000]
const oneDollar =90;
let transactionInDollar =trade.map((amount)=>{
    return (amount/oneDollar).toFixed(0)
})
console.log(transactionInDollar)

//condtructor functions
function makeCar(_name , _company , _color){
    this.name = _name
    this.company = _company
    this.color = _color

    this.drive = function(){
        console.log("Am driving ${this.name} which is of ${this.color} color")
    }

}

let car1 = new makeCar("Toyota", "BMW", "White")
console.log(car1)
let car2 = new makeCar("Mecedes benz", "Tesla", "Red")
console.log(car2)

car1.drive()

// exercises
/*function Person(firstName, lastName) {
    this.firstName = firstName;
    this.lastName = lastName;
   }
   const member = new Person('Lydia', 'Hallie');
   Person.getFullName = function() {
   
   return `${this.firstName} ${this.lastName}`;
   
   };
   console.log(member.getFullName());*/


   /*function Person(firstName, lastName) {
    this.firstName = firstName;
    this.lastName = lastName;
    }
    const lydia = new Person('Lydia', 'Hallie');
    const sarah = Person('Sarah', 'Smith');
    console.log(lydia);
    console.log(sarah);


    const shape = {
        radius: 10,
        diameter() {
        return this.radius * 2;
        },
        perimeter: () => 2 * Math.PI * this.radius,
       };
       
       console.log(shape.diameter());
       console.log(shape.perimeter());*/


// synchronized code

/*console.log("Before")
fs.readFile("m1.txt, cb1")
function cb1(err, data){
    if(err){
        console.log(err)
}   }
    fs.readFile("m2.txt, cb2")
function cb2(err, data){
    if(err){
        console.log(err)
        
    }
}
console.log("The file is =>" + data)
console.log("The last line")*/


// set timeout
/*console.log("Before")
function greet(){
    console.log("Hello from set timeout")

}
setTimeout(greet, 200) 
console.log("After")
//set timer
function hello(){
    console.log("Hello bro")

}
let timer =setInterval(hello, 1000)

setTimeout(function(){
    clearInterval(timer)
}, 5000)*/

//execsises
//1
const firstPromise = new Promise((res, rej) => {
    setTimeout(res, 500, 'one');
   });
   
   const secondPromise = new Promise((res, rej) => {
    setTimeout(res, 100, 'two');
   });
   Promise.race([firstPromise, secondPromise]).then(res => console.log(res));
//2
const myPromise = () => Promise.resolve('I have resolved!');

function firstFunction() {
 myPromise().then(res => console.log(res));
 console.log('second');
}

async function secondFunction() {
 console.log(await myPromise());
 console.log('second');
}

firstFunction();
secondFunction();

//3
var p = new Promise((resolve, reject) => {
    reject(Error('Promise Fails!'))
    })
    p.catch(error => console.log(error.message))
    p.catch(error => console.log(error.message))

//4
async function f() {
    let result = 'new!';
    let promise = new Promise((resolve, reject) => {
    setTimeout(() => resolve('done!'), 1000);
    });
   result = await promise;
   console.log(result);
   }
   
   f();






















