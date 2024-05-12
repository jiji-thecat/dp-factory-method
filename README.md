# Design Pattern - Factory Method Pattern

## Description

The Factory Method pattern enables a subclass to generate instances flexibly, thus enhancing reusability of the class. To understand this concept better, let's delve into a class diagram in the next section.

### Class Diagram

![class diagram](https://github.com/jiji-thecat/dp-factory-method/assets/104809324/17e31b51-bc40-459e-be5f-1fc62aec9ca0)
[wiki](https://ja.wikipedia.org/wiki/Factory_Method_%E3%83%91%E3%82%BF%E3%83%BC%E3%83%B3)

This pattern bears resemblance to the Template Method pattern. In the [Template Method pattern](https://github.com/jiji-thecat/dp-template-method), the Taiyaki mold class serves as the superclass acting as the template, with subclasses utilizing this template. The Taiyaki mold class defines the flow to create a Taiyaki, while subclasses are able to override specific steps of this flow, such as `filling()` and `crustColor()`. However, they are restricted from altering the overall flow. The distinction between the Template Method and Factory Method lies in the latter's allowance for subclasses to control the flow by enabling them to generate instances.

#### Correspondence Table Between Taiyaki and Class Diagram

| Class           | Taiyaki Example             |
| --------------- | --------------------------- |
| Creator         | Taiyaki Mold Class          |
| Product         | Taiyaki Class               |
| ConcreteCreator | Concrete Taiyaki Mold Class |
| ConcreteProduct | Concrete Taiyaki Class      |

## How to Install and Run

Import this project as a QT project.

## How to Use This App

![factory-method-app](https://github.com/jiji-thecat/dp-factory-method/assets/104809324/102dd730-6cd2-4978-a2cd-bb3af90b66ac)

This application bears similarity to the [Template Method pattern](https://github.com/jiji-thecat/dp-template-method). The distinction lies in the addition of the `bowl` row for the Factory Method pattern, allowing animals to use their preferred bowl. In this app, the Cat class employs the Factory Method pattern to select its preferred bowl. The Cat class generates the instance within its class, while for Rabbit and Bear, instances are generated in the superclass.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation, the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

\*\*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
