local a = nil
local b = nil
local resultado = nil

io.write("Digite o primeiro numero: ")
a = io.read()
io.write("Digite o segundo numero: ")
b = io.read()

resultado = a + b

if(resultado > 10) then

print (a," + ",b, " = ", resultado, " é maior que 10");

else

print (a," + ",b, " = ", resultado, " é menor que 10");

end