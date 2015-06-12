//
//  main.m
//  test-app
//
//
// 
//

#import <UIKit/UIKit.h>

int main(int argc, char *argv[]) 
{
  NSAutoreleasePool * pool = [[NSAutoreleasePool alloc] init];
  int retVal = UIApplicationMain(argc, argv, nil, @"TestAppDelegate");
  [pool release];
  return retVal;
}
