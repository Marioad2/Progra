var contenedor = document.getElementById("animales");
var btn = document.getElementById("btn");
btn.addEventListener("click", function(){
  var Request = new XMLHttpRequest();
  Request.open('get', 'https://raw.githubusercontent.com/Marioad2/Progra/master/test1.json', true);
  Request.onload = function() {
    // var k;
    var datos = JSON.parse(Request.responseText);
    // for(k = 1; k<datos.length; k++){
      console.log(datos[0]);
      console.log(datos[1]);
      console.log(datos[2]);
      console.log(datos[3]);
      console.log(datos[4]);
      console.log(datos[5]);
      console.log(datos[6]);
    // };
    mostrardatos(datos);
  };
  Request.send();
});

function mostrardatos(a) {
  var htmlString = "";
  var i;
  for(i = 0; i<a.length; i++){
    htmlString += "<p>" + a[i].name + "</p>";
  }
  contenedor.insertAdjacentHTML('beforeend', htmlString);
}
