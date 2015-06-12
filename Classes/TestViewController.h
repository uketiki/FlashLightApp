//
//  TestViewController.h
//
//  
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>

@interface TestViewController : UIViewController
{
	UIButton					*flashlightButton;
	AVCaptureSession 	*AVSession;
  
  BOOL							flashlightOn;
}

@property (nonatomic, retain) AVCaptureSession *AVSession;

@end
