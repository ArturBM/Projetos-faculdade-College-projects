
window.onload = inicializaTudo
var cont = 0
var botaoTexto
var botaoTitulo 
var tituloCSS

function inicializaTudo()
{
    botaoTitulo =  document.getElementById("tituloBtn")
    botaoTitulo.onclick = aplicaCssTitulo

    tituloCSS= document.querySelector("h2")

    document.getElementById("textoBtn").onclick = AddCssTexto
}

function aplicaCssTitulo()
{
    if(tituloCSS.className != "titulo"){
        tituloCSS.className = "titulo"
    }
    else{
        tituloCSS.className = ""
    }
    
}

function AddCssTexto()
{
    const texto = document.querySelector("p")

    texto.id = textoA
}


