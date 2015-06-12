//
//  TestAppDelegate.h
//
// 
//

#import <UIKit/UIKit.h>

@class TestViewController;

@interface TestAppDelegate : NSObject <UIApplicationDelegate, UIImagePickerControllerDelegate>
{
  UIWindow *window;
  TestViewController *vc;
}

@end

