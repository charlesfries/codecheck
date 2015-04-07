#import <UIKit/UIKit.h>

@interface Home : UIViewController {
    IBOutlet UITextField *field;
    IBOutlet UIProgressView *progress;
    IBOutlet UISlider *slider;
    IBOutlet UILabel *rating;
    IBOutlet UILabel *note;
}

- (IBAction)go;
- (IBAction)generate;

@end