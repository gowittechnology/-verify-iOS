//  Created by GoWit
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef void(^VerifyCompletedCallback)(NSURL *fileOuputURL);

@interface Verify : NSObject

- (void)startRecordingView:(UIView *)view  excludeView:(UIView *)eView onCompletion:(VerifyCompletedCallback)block;
/**
 Just an alias.
 **/
- (void)startRecordingView:(UIView *)view withCallback:(VerifyCompletedCallback)callback;
/**
 Receiving AppID in lifecycle.
 **/
-(void)getAppID;

/**
 Stops recording a previously defined UIView.
 **/
- (void)stop;
@end
