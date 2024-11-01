var moldura
var botaoVoltar
var botaoAvancar
var fotos
var indice
var temporizador
const pastaImagem = "imagem/"
const extensaoImagem = ".jpg"

botaoVoltar = document.getElementById('btnVoltar')
botaoAvancar = document.getElementById('btnAvancar')
moldura = document.getElementById("moldura")

fotos = ["img1","img2","img3","img4", "img5"]
indice = 0


window.onload = inicio()

function inicio()
{

    botaoAvancar.onclick = AvancarFoto
    botaoVoltar.onclick = VoltarFoto
    MostrarFoto()

}

function AvancarFoto()
{
    if(indice < fotos.length -1)
    {
        indice++  
    }
    else{
        indice[0]
    }

   MostrarFoto()
}

function VoltarFoto()
{
    if(indice < fotos.length -1)
    {
        indice--  
    }
    else{
        indice[4]
    }

   MostrarFoto()
}

function MostrarFoto() {

    moldura.src = pastaImagem + fotos[indice] + extensaoImagem
}

