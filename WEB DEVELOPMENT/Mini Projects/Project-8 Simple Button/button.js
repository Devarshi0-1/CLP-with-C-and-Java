let counter2 = 0
let body = document.getElementById('body')
let text = document.getElementById('text')
let button = document.getElementById('button')
let btnCircle = document.getElementById('icon')
let colors = ["#4700D8", "#9900F0", "#F900BF", "#FF85B3", "#FFF56D", "#99FFCD", "rgba(170, 255, 0, 0.502)"]

button.addEventListener('click', () => {
    if (text.innerHTML === 'Pause')
        playState()
    else
        pauseState()
});

function colorChanging() {
    body.style.backgroundColor = colors[counter2];
    counter2++

    if (counter2 == colors.length)
        counter2 = 0
}

function playState() {
    btnCircle.style.transform = 'translate(80%) rotate(1turn)'
    btnCircle.style.backgroundImage = "url('play.svg')"
    text.innerHTML = 'Play'
    text.style.transform = 'translate(-25%)'
    chargingInterval = setInterval(colorChanging, 1000)
}

function pauseState() {
    btnCircle.style.transform = 'translate(-80%) rotate(0turn)'
    btnCircle.style.backgroundImage = "url('pause.svg')"
    text.innerHTML = 'Pause'
    text.style.transform = 'translate(30%)'
    clearInterval(chargingInterval)
}