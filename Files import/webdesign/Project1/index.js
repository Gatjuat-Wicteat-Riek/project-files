const bar =document.getElementById("bar");
const close =document.getElementById("close");
const head=document.getElementById("head");
if(bar){
    bar.addEventListener("click", () => {
        head.classList.add("active");
    })
}
if(close){
    close.addEventListener("click", () => {
        head.classList.remove("active");
    })
}