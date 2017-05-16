//
//  JHColumnChart.h
//  JHChartDemo
//


#import "JHChart.h"

@interface JHColumnChart : JHChart


/**
 *  Each histogram of the background color, if you do not set the default value for green. Setup must ensure that the number and type of the data source array are the same, otherwise the default is not set.
 *  柱状图的颜色 ~ 柱状图的个数必须和颜色的个数保持一致，否则选择默认颜色
 */
@property (nonatomic, strong) NSArray<NSArray *> * columnBGcolorsArr;

/**
 *  Data source array
 *  数据源
 */
@property (nonatomic, strong) NSArray<NSArray *> * valueArr;

/**
 *  X axis classification of each icon
 *  每个图标的 X 轴标签
 */
@property (nonatomic, strong) NSArray * xShowInfoText;


/**
 *  The background color of the content view
 *  背景色
 */
@property (nonatomic, strong) UIColor  * bgVewBackgoundColor;


/**
 *  Column spacing, non continuous, default is 5
 *  列间距,非连续的,默认是5
 */
@property (nonatomic, assign) CGFloat typeSpace;

/**
 *  The width of the column, the default is 40
 *  列 宽度
 */
@property (nonatomic, assign) CGFloat columnWidth;

/**
 *  Whether the need for Y, X axis, the default YES
 */
@property (nonatomic, assign) BOOL needXandYLine;

/**
 *  Y, X axis line color
 *  X, Y 轴线颜色
 */
@property (nonatomic, strong) UIColor * colorForXYLine;

/**
 *  X, Y axis text description color
 *  X, Y 轴标签的颜色
 */
@property (nonatomic, strong) UIColor * drawTextColorForX_Y;

/**
 *  Dotted line guide color
 */
@property (nonatomic, strong) UIColor * dashColor;

/**
 *  The starting point, can be understood as the origin of the left and bottom margins
 *  可以理解为起点,左边和底部边缘的起源
 */
@property (nonatomic, assign) CGPoint originSize;

/**
 *  Starting from the origin of the horizontal distance histogram
 *  没搞明白啥用处。。。。
 */
@property (nonatomic, assign) CGFloat drawFromOriginX;

/**
 *  Whether this chart show Y line or not .Default is Yes
 *  是否展示Y轴
 */
@property (nonatomic,assign) BOOL isShowYLine;

/**
 *  Whether this chart show line or not.Default is NO;
 *  是否显示折线图
 */
@property (nonatomic,assign) BOOL isShowLineChart;


/**
 *  If isShowLineChart proprety is YES,we need this value array to draw chart
 *  如果存在折线图 -- 折线图相关数据源
 */
@property (nonatomic,strong)NSArray * lineValueArray;


/**
 *  If isShowLineChart proprety is Yes,we will draw path of this linechart with this color
 *  Default is blue
 */
@property (nonatomic,strong)UIColor * lineChartPathColor;

/**
 *  if isShowLineChart proprety is Yes,we will draw this linechart valuepoint with this color
 *  Default is yellow
 */
@property (nonatomic,strong)UIColor * lineChartValuePointColor;


@end
