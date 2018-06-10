var Request = new XMLHttpRequest();
Request.open('get', 'https://learnwebcode.github.io/json-example/animals-1.json', true);
Request.onload = function() {
  var datos = JSON.parse(Request.responseText);
  console.log(datos[0]);
};
Request.send();
