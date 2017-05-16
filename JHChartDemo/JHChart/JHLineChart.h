//
//  JHLineChart.h
//  JHChartDemo
//


#import <UIKit/UIKit.h>
#import "JHChart.h"

/**
 *  Line chart type, has been abandoned
 */
typedef  NS_ENUM(NSInteger,JHLineChartType){

    JHChartLineEveryValueForEveryX=0, /*        Default         */
    JHChartLineValueNotForEveryX
};



/**
 *  Distribution type of line graph
 */
typedef NS_ENUM(NSInteger,JHLineChartQuadrantType){
    
    /**
     *  The line chart is distributed in the first quadrant.
     *   在第一象限
     */
    JHLineChartQuadrantTypeFirstQuardrant,
    
    /**
     *  The line chart is distributed in the first two quadrant
     *  在前两个象限
     */
    JHLineChartQuadrantTypeFirstAndSecondQuardrant,
    
    /**
     *  The line chart is distributed in the first four quadrant
     *  在 一四象限
     */
    JHLineChartQuadrantTypeFirstAndFouthQuardrant,
    
    /**
     *  The line graph is distributed in the whole quadrant
     */
    JHLineChartQuadrantTypeAllQuardrant
    
    
};



/****************************华丽的分割线***********************************/



@interface JHLineChart :JHChart

/**
 *  X axis scale data of a broken line graph, the proposed use of NSNumber or the number of strings
 */
@property (nonatomic, strong) NSArray * xLineDataArr;


/**
 *  Y axis scale data of a broken line graph, the proposed use of NSNumber or the number of strings
 */
@property (nonatomic, strong) NSArray * yLineDataArr;


/**
 *  An array of values that are about to be drawn.
 *  折线图 峰值点 的值 可以字符串形式和NSNumber  @“1”，@10
 */
@property (nonatomic, strong) NSArray * valueArr;


/**
 *  The type of broken line graph has been abandoned.
 */
@property (assign , nonatomic) JHLineChartType  lineType ;


/**
 *  The quadrant of the specified line chart
 */
@property (assign, nonatomic) JHLineChartQuadrantType  lineChartQuadrantType;


/**
 *  Line width (the value of non drawn path width, only refers to the X, Y axis scale line width)
 */
@property (assign, nonatomic) CGFloat lineWidth;


/**
 *  To draw the line color of the target
 *  折线图中 折线的颜色
 */
@property (nonatomic, strong) NSArray * valueLineColorArr;




/**
 *  Color for each value draw point
 *  折线图中 峰值点的颜色
 */
@property (nonatomic, strong) NSArray * pointColorArr;


/**
 *  Y, X axis scale numerical color
 *  x 和 y 轴标签字体颜色
 */
@property (nonatomic, strong) UIColor * xAndYNumberColor;


/**
 *  Draw dotted line color
 */
@property (nonatomic, strong) NSArray * positionLineColorArr;



/**
 *  Draw the text color of the information.
 */
@property (nonatomic, strong) NSArray * pointNumberColorArr;



/**
 *  Value path is required to draw points
 */
@property (assign,  nonatomic) BOOL hasPoint;



/**
 *  Draw path line width
 */
@property (nonatomic, assign) CGFloat animationPathWidth;


/**
 *  Drawing path is the curve, the default NO
 *  是否是 平滑的曲线
 */
@property (nonatomic, assign) BOOL pathCurve;





/**
 *  Whether to fill the contents of the drawing path, the default NO
 *  是否填充颜色
 */
@property (nonatomic, assign) BOOL contentFill;




/**
 *  Draw path fill color, default is grey
 *  填充颜色
 */
@property (nonatomic, strong) NSArray * contentFillColorArr;




/**
 *  whether this chart shows the Y line or not.Default is YES
 *   y  轴是否显示
 */
@property (nonatomic,assign) BOOL showYLine;


/**
 *  whether this chart shows the Y level lines or not.Default is NO
 *  x 轴平行线 是否显示  默认不显示
 */
@property (nonatomic,assign) BOOL showYLevelLine;

/**
 *  whether this chart shows leading lines for value point or not,default is YES
 *  峰值点 与 X 轴对应的平行线
 */
@property (nonatomic,assign) BOOL showValueLeadingLine;


/**
 *  fontsize of value point.Default 8.0;
 *  峰值点对应的 字号大小
 */
@property (nonatomic,assign) CGFloat valueFontSize;


/**
 *  Custom initialization method
 *
 *  @param frame         frame
 *  @param lineChartType Abandoned
 *
 */
-(instancetype)initWithFrame:(CGRect)frame
            andLineChartType:(JHLineChartType)lineChartType;



@end
