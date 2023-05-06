var plus = document.getElementsByClassName('increment');
var minus = document.getElementsByClassName('decrement');
var qty = document.getElementsByClassName('quantity');
//console.log(plus);
//console.log(minus);
//console.log(qty);
for (var i = 0; i < plus.length; i++){
    var button = plus[i];
    button.addEventListener('click', function(event){
        var buttonClicked = event.target;
        //console.log(buttonClicked);
        var input = buttonClicked.parentElement.children[1];
        //console.log(input);
        //qty.innerText = input;
        var inputValue = input.innerText;
        //console.log(inputValue);
        var newValue = parseInt(inputValue) + 1;
        //console.log(newValue);
        input.innerText = newValue;
    })
}

for (var i = 0; i < minus.length; i++){
    var button = minus[i];
    button.addEventListener('click', function(event){
        var buttonClicked = event.target;
        //console.log(buttonClicked);
        var input = buttonClicked.parentElement.children[1];
        //console.log(input);
        //qty.innerText = input;
        var inputValue = input.innerText;
        //console.log(inputValue);
        var newValue = parseInt(inputValue) - 1;
        //console.log(newValue);
        input.innerText = newValue;
        
        
         
            
        


    })
}


