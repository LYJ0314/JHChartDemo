//
//  JHPieForeBGView.h
//  JHCALayer
//


#import <UIKit/UIKit.h>

/**
 *  Each click of the pie chart callback block
 */
typedef void(^selectBlock)(CGFloat angle,CGPoint p);



@interface JHPieForeBGView : UIView

/**
 *  Current pie chart callback block
 */
@property (copy, nonatomic) selectBlock select;


@end
