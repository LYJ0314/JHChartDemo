//
//  JHPieChart.h
//  JHCALayer
//


#import <UIKit/UIKit.h>
#import "JHChart.h"
@interface JHPieChart : JHChart

/**
 *  Need to draw the specific values。Elements can be either NSString or NSNumber type
 *  饼状图每个部分占的大小
 */
@property (nonatomic, strong) NSArray * valueArr;


/**
 *  Description of each segment of a pie graph
 *  饼状图每个部分的描述
 */
@property (nonatomic, strong) NSArray * descArr;


/**
 *  An array of colors for each section of the pie
 *  饼状图每个部分的颜色
 */
@property (nonatomic, strong) NSArray * colorArr;


/**
 *  The length of the outward shift when the pie chart hits
 *  被点击时 向外侧移的距离
 */
@property (assign , nonatomic) CGFloat positionChangeLengthWhenClick;


/**
 *  whether this chart show the description or not,default is YES.
 *  是否展示 描述文字
 */
@property (nonatomic,assign) BOOL showDescripotion;


@end
