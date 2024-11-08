// JavaScript Document
window.onload = inicio

var itens = [];
var textInput = document.getElementById("inputText");
var btnAdd = document.getElementById("addBtn");
var ul = document.getElementById("minhaLista")
function inicio()
{

btnAdd.onclick = addItemtoArray;

}

function addItemtoArray()
{
if(textInput.value != null & textInput.value !="")
{
    itens.push(textInput.value)
    popularLista()
    textInput.value = ""
}

}

function popularLista()
{

   ul.innerHTML = ""
    
   
    
    for (let indice = 0; indice < itens.length; indice++)
    {
        var li = document.createElement('li')

          li.textContent = itens[indice]

          var btnEditar = document.createElement('button')
          btnEditar.textContent = "Editar"
          btnEditar.className = "edite"

          btnEditar.onclick = function(){
            editarItem(indice)
          }

          var btnDeletar = document.createElement('button')
          btnDeletar.textContent = "X"
          btnDeletar.className = "delete"

          btnDeletar.onclick = function(){
            deletarItem(indice)
          }

          li.appendChild(btnDeletar)
          li.appendChild(btnEditar)
          ul.appendChild(li)
    }
}

function editarItem(indiceElemento)
{

    btnAdd.className = "Salvar"
    btnAdd.textContent = "Salvar"
    textInput = itens[indiceElemento]

}

function deletarItem(indiceElemento)
{

    itens.splice(indiceElemento,1)
    popularLista()

}


