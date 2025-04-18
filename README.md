# Документация по подключению и использованию

Проект использует статическую библиотеку и заголовочные файлы для выполнения функции настройки. Следуйте шагам ниже, чтобы настроить проект и использовать функцию в вашем `ViewController`.

## Шаг 1: Добавьте папку с хедерами

1. Создайте папку в вашем проекте для хранения заголовочных файлов, например, `include`.
2. Скопируйте все необходимые заголовочные файлы, такие как `setupManager.h`, в папку `include`.
3. В Xcode добавьте эту папку в проект:
   - Перейдите в **Project Navigator**.
   - Правый клик по проекту -> **Add Files to "<your project>"**.
   - Выберите папку с заголовочными файлами и убедитесь, что опция **Copy items if needed** выбрана.

## Шаг 2: Подключите статическую библиотеку

1. Скачайте статическую библиотеку, которая содержит реализацию `setupManager`.
2. В Xcode откройте настройки проекта:
   - Перейдите в раздел **Build Settings**.
   - Найдите опцию **Library Search Paths** и добавьте путь к папке, где находится ваша статическая библиотека.
3. В разделе **Link Binary with Libraries**, добавьте вашу статическую библиотеку `libsecIOS.a`.

## Шаг 3: Использование функции в `ViewController`

Теперь вы можете использовать функцию `setupAC` в вашем `ViewController`. Например, в методе `viewDidLoad` добавьте следующий код:

```objc
#import "ViewController.h"
#import "setupManager.h"  // Импортируем заголовок с определением setupManager

@interface ViewController ()
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Создаем экземпляр setupManager
    setupManager *manager = [[setupManager alloc] init];
    
    // Вызываем метод setupAC
    [manager setupAC];
    
    UILabel *welcomeLabel = [[UILabel alloc] initWithFrame:CGRectMake(50, 100, 300, 50)];
    welcomeLabel.text = @"TEST";
    welcomeLabel.textAlignment = NSTextAlignmentCenter;
    welcomeLabel.textColor = [UIColor redColor];
    [self.view addSubview:welcomeLabel];
}

@end
