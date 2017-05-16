//
//  JHRingChart.h
//  JHChartDemo
//


#import "JHChart.h"

@interface JHRingChart : JHChart
#define k_Width_Scale  (self.frame.size.width / [UIScreen mainScreen].bounds.size.width)

/**
 *  Data source Array
 *  环状图每部分对应的大小
 */
@property (nonatomic, strong) NSArray * valueDataArr;


/**
 *  An array of colors in the loop graph
 *  环状图的线条填充颜色
 */
@property (nonatomic, strong) NSArray * fillColorArray;


/**
 *  Ring Chart width
 *  环状图的线条宽度
 */
@property (nonatomic, assign) CGFloat ringWidth;
@end
