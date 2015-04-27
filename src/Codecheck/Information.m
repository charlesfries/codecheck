#import "Information.h"

@implementation Information

- (IBAction)link {
    [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"http://usefigure.com"]];
}

@end
