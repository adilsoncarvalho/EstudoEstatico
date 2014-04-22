# EstudoEstatico

Um estudo simples para compreender como criar e utilizar uma lib estática em um projeto em C++ no VisualStudio 2013.

## Objetivos

Responder as seguintes perguntas:

* como colocar tudo sob uma mesma solução
* reaproveitando códigos entre projetos
* uso das libs como dependência segue o modelo do .net
* implementação de testes nas libs

## Howto

### Referenciar uma biblioteca estática (lib) em outro projeto

No projeto que irá consumi-la efetuar os seguintes passos:

* Adicionando a lib como dependência de compilação

    right click > Build Dependencies > Project Dependencies > escolha a lib

* Incluindo diretório com os cabeçalhos

    right click > Properties > C/C++ > General > Aditional Include Directories
    ..\projeto-da-lib

* Incluindo diretório da lib para o linker

    right click > Properties > Linker > Input > Aditional Dependencies
    $(OutDir)\nome-da-lib.lib

# License

The MIT License (MIT)

Copyright (c) 2014 Adilson Carvalho

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
